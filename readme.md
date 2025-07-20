# MFCToolkits

## 概述

MFCToolkits 是一个功能丰富的 MFC 扩展控件库，提供了一系列现代化 UI 控件，用于增强传统 MFC 应用程序的用户界面体验。该库包含多种专业级控件，支持从 Visual Studio 2010 (vc100) 到 Visual Studio 2022 (vc143) 的多个编译版本，并同时支持 Win32 和 x64 平台。

## 编译信息

### 支持的编译器和平台
- **编译器版本**：vc100、vc110、vc140、vc141、vc142、vc143
- **平台**：Win32 和 x64
- **字符集**：Unicode
- **MFC 模式**：动态链接 (Dynamic)

### 编译输出
- 动态库：`MFCToolkits$(Configuration).dll`
- 库文件：`MFCToolkits$(Configuration).lib`

## 主要控件组件

### 1. CGridListCtrlEx - 增强型网格列表控件
- 支持单元格编辑、排序、超链接、分组和拖放
- 提供列特性系统定制单元格行为
- 支持 Windows XP/Vista 风格
- 功能包括：单元格导航、工具提示、列管理、剪贴板操作等

### 2. GridCtrl - 高级网格控件
- 功能丰富的网格视图控件
- 支持单元格编辑、验证、排序和虚拟模式
- 包含多种单元格类型：按钮、复选框、下拉框等
- 支持打印和 OLE 拖放操作

### 3. MultiPaneCtrl - 多窗格布局控件
- 创建层次化嵌套窗格区域
- 支持标签页和子窗格动态重组
- 提供多种停靠标记样式
- 可保存/恢复布局状态

### 4. OutlookTabCtrl - Outlook 风格标签控件
- 水平条带式标签设计
- 支持折叠为按钮模式
- 可定制渲染样式
- 内置状态保存/加载功能

### 5. PngAnimation - PNG 动画控件
- 显示进度动画的轻量级解决方案
- 支持 PNG 序列帧动画
- 独立于 MFC，可用于 Win32 API 应用
- 简单易用的启动/停止控制

### 6. SplitterCtrl - 高级分割控件
- 替代传统 CSplitterWnd 的现代化解决方案
- 支持复杂矩阵布局
- 提供静态和动态调整大小模式
- 可保存/恢复分割状态

### 7. TabCtrl - 高级标签控件
- 支持 28 种内置渲染样式
- 顶部/底部标签定位
- 支持标签拖动、缩放和滚动
- 可定制区域大小和间距

### 8. ToolBoxCtrl - 工具箱树控件
- 树形结构组织命令按钮
- 支持分组、复选框和禁用状态
- 提供两种交互模式：点击和拖放
- 可定制图标和工具提示

## 使用特点

1. **渲染与行为分离**：
   - 所有控件采用 Draw/IRecalc 接口分离渲染逻辑
   - 内置多种视觉样式（VS2003、VS2008、VS2010、VS2019等）
   - 支持自定义渲染实现

2. **状态持久化**：
   - 提供统一的 LoadState/SaveState 机制
   - 支持注册表或文件存储
   - 保存布局、位置、可见性等状态

3. **现代化交互**：
   - 支持拖放重组
   - 丰富的工具提示
   - 动画效果
   - 响应式布局

4. **简单集成**：
   - 基于模板的样式类 (如 `TabCtrlEx<TabCtrlStyle_VS2019>`)
   - 清晰的创建和初始化流程
   - 详细的示例代码

## 快速开始

```cpp
// 以 TabCtrl 为例的初始化代码
#include "TabCtrl.h"

// 创建控件实例（指定VS2019亮色主题）
TabCtrlEx<TabCtrlStyle_VS2019_client_light> m_TabCtrl;

// 初始化
if (!m_TabCtrl.Create(this, WS_CHILD | WS_VISIBLE, CRect(0,0,0,0), ID_TabCtrl))
    return -1;

// 创建图像资源
m_TabCtrl.CreateSystemImage(nullptr, IDB_IMAGES_SYSTEM, true, 14);
m_TabCtrl.CreateImage(nullptr, IDB_IMAGES_TAB_NORMAL, IDB_IMAGES_TAB_DISABLE, true, 16);

// 添加子控件
m_TabCtrl.Add(m_List1, "Mail", 0);
m_TabCtrl.Add(m_List2, "Calendar", 1);

// 加载状态并刷新
m_TabCtrl.LoadState(AfxGetApp(), "TabCtrl", "State");
m_TabCtrl.Update();
```

## 项目结构

```
MFCToolkits/
├── GridCtrl/            # 高级网格控件
├── GridListCtrlEx/      # 增强型列表控件
├── MultiPaneCtrl/       # 多窗格布局控件
├── OutlookTabCtrl/      # Outlook风格标签
├── PngAnimation/        # PNG动画控件
├── SplitterCtrl/        # 分割控件
├── TabCtrl/             # 高级标签控件
├── ToolBoxCtrl/         # 工具箱树控件
├── Resource/            # 资源文件
├── MFCToolkits.vcxproj  # 项目文件
└── *.md                 # 组件详细文档
```

## 许可信息

本项目基于开源许可证发布，允许在商业和非商业项目中免费使用。具体许可条款请参考各控件的文档说明。特别说明：

- GridCtrl 和 CGridListCtrlEx 遵循 CodeProject 的开源许可
- 其他控件遵循类似 MIT 的宽松许可

## 更多资源

每个控件组件都有详细的 Markdown 文档，包含使用示例、效果图和技术细节：
- [CGridListCtrlEx 文档](.\doc\CGridListCtrlEx.htm)
- [GridCtrl 文档](.\doc\GridCtrl.md)
- [MultiPaneCtrl 文档](.\doc\MultiPaneCtrl.md)
- [OutlookTabCtrl 文档](.\doc\OutlookTabCtrl.md)
- [PngAnimation 文档](.\doc\PngAnimation.md)
- [SplitterCtrl 文档](.\doc\SplitterCtrl.md)
- [TabCtrl 文档](.\doc\TabCtrl.md)
- [ToolBoxCtrl 文档](.\doc\ToolBoxCtrl.md)