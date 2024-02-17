<!DOCTYPE html>
<!--[if IE]><![endif]-->
<html>
  
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
    <title>Class CatalogCardViewModel
   | site </title>
    <meta name="viewport" content="width=device-width">
    <meta name="title" content="Class CatalogCardViewModel
   | site ">
    <meta name="generator" content="docfx 2.59.4.0">
    
    <link rel="shortcut icon" href="../../favicon.ico">
    <link rel="stylesheet" href="../../styles/docfx.vendor.css">
    <link rel="stylesheet" href="../../styles/docfx.css">
    <link rel="stylesheet" href="../../styles/main.css">
    <meta property="docfx:navrel" content="../../toc.html">
    <meta property="docfx:tocrel" content="toc.html">
    
    <meta property="docfx:rel" content="../../">
    
  </head>
  <body data-spy="scroll" data-target="#affix" data-offset="120">
    <div id="wrapper">
      <header>
        
        <nav id="autocollapse" class="navbar navbar-inverse ng-scope" role="navigation">
          <div class="container">
            <div class="navbar-header">
              <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar">
                <span class="sr-only">Toggle navigation</span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
              </button>
              
              <a class="navbar-brand" href="../../index.html">
                <img id="logo" class="svg" src="../../logo.svg" alt="site">
              </a>
            </div>
            <div class="collapse navbar-collapse" id="navbar">
              <form class="navbar-form navbar-right" role="search" id="search">
                <div class="form-group">
                  <input type="text" class="form-control" id="search-query" placeholder="Search" autocomplete="off">
                </div>
              </form>
            </div>
          </div>
        </nav>
        
        <div class="subnav navbar navbar-default">
          <div class="container hide-when-search" id="breadcrumb">
            <ul class="breadcrumb">
              <li></li>
            </ul>
          </div>
        </div>
      </header>
      <div class="container body-content">
        
        <div id="search-results">
          <div class="search-list">Search Results for <span></span></div>
          <div class="sr-items">
            <p><i class="glyphicon glyphicon-refresh index-loading"></i></p>
          </div>
          <ul id="pagination" data-first="First" data-prev="Previous" data-next="Next" data-last="Last"></ul>
        </div>
      </div>
      <div role="main" class="container body-content hide-when-search">
        
        <div class="sidenav hide-when-search">
          <a class="btn toc-toggle collapse" data-toggle="collapse" href="#sidetoggle" aria-expanded="false" aria-controls="sidetoggle">Show / Hide Table of Contents</a>
          <div class="sidetoggle collapse" id="sidetoggle">
            <div id="sidetoc"></div>
          </div>
        </div>
        <div class="article row grid-right">
          <div class="col-md-10">
            <article class="content wrap" id="_content" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel">
  
  
  <h1 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel" class="text-break">Class CatalogCardViewModel
  </h1>
  <div class="markdown level0 summary"></div>
  <div class="markdown level0 conceptual"></div>
  <div class="inheritance">
    <h5>Inheritance</h5>
    <div class="level0"><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object">object</a></div>
    <div class="level1"><a class="xref" href="../../api/ParmaGIS.Core.Utilities.BindableBase.html">BindableBase</a></div>
    <div class="level2"><a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html">URBindableBase</a></div>
    <div class="level3"><a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html">CardViewModelBase</a></div>
    <div class="level4"><span class="xref">CatalogCardViewModel</span></div>
  </div>
  <div class="implements">
    <h5>Implements</h5>
    <div><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.componentmodel.inotifypropertychanged">INotifyPropertyChanged</a></div>
    <div><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.idisposable">IDisposable</a></div>
  </div>
  <div class="inheritedMembers">
    <h5>Inherited Members</h5>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_Title">CardViewModelBase.Title</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_OpenCommand">CardViewModelBase.OpenCommand</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_LoadCommand">CardViewModelBase.LoadCommand</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_CloseCommand">CardViewModelBase.CloseCommand</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_Open">CardViewModelBase.Open()</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_Close">CardViewModelBase.Close()</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_CanClose">CardViewModelBase.CanClose()</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_CurrentObject">CardViewModelBase.CurrentObject</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_CurrentObjectExplorer">CardViewModelBase.CurrentObjectExplorer</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_History">URBindableBase.History</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_DisposableContainer">URBindableBase.DisposableContainer</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_UndoCommand">URBindableBase.UndoCommand</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_RedoCommand">URBindableBase.RedoCommand</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_InitProperty__1_Reactive_Bindings_ReactiveProperty___0__">URBindableBase.InitProperty&lt;T&gt;(ReactiveProperty&lt;T&gt;)</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_InitProperty__1_Reactive_Bindings_ReactiveProperty___0____0_">URBindableBase.InitProperty&lt;T&gt;(ReactiveProperty&lt;T&gt;, T)</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_BuildProperty__1___0_">URBindableBase.BuildProperty&lt;T&gt;(T)</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_Undo">URBindableBase.Undo()</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_Redo">URBindableBase.Redo()</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.URBindableBase.html#ParmaGIS_WPF_UI_Utilities_URBindableBase_Dispose">URBindableBase.Dispose()</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.Core.Utilities.BindableBase.html#ParmaGIS_Core_Utilities_BindableBase_PropertyChanged">BindableBase.PropertyChanged</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.Core.Utilities.BindableBase.html#ParmaGIS_Core_Utilities_BindableBase_SetProperty__1___0____0_System_Boolean_System_String_">BindableBase.SetProperty&lt;T&gt;(ref T, T, bool, string)</a>
    </div>
    <div>
      <a class="xref" href="../../api/ParmaGIS.Core.Utilities.BindableBase.html#ParmaGIS_Core_Utilities_BindableBase_OnPropertyChanged_System_String_">BindableBase.OnPropertyChanged(string)</a>
    </div>
    <div>
      <a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object.equals#system-object-equals(system-object)">object.Equals(object)</a>
    </div>
    <div>
      <a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object.equals#system-object-equals(system-object-system-object)">object.Equals(object, object)</a>
    </div>
    <div>
      <a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object.gethashcode">object.GetHashCode()</a>
    </div>
    <div>
      <a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object.gettype">object.GetType()</a>
    </div>
    <div>
      <a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object.memberwiseclone">object.MemberwiseClone()</a>
    </div>
    <div>
      <a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object.referenceequals">object.ReferenceEquals(object, object)</a>
    </div>
    <div>
      <a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object.tostring">object.ToString()</a>
    </div>
  </div>
  <h6><strong>Namespace</strong>: <a class="xref" href="../../api/ParmaGIS.html">ParmaGIS</a><a class="xref" href="../../api/ParmaGIS.WPF.html">WPF</a><a class="xref" href="../../api/ParmaGIS.WPF.Modules.html">Modules</a><span class="xref">ParmaGIS.WPF.Modules.Parma</span><a class="xref" href="../../api/ParmaGIS.WPF.Modules.Parma.UI.html">UI</a><a class="xref" href="../../api/ParmaGIS.WPF.Modules.Parma.UI.Cards.html">Cards</a><a class="xref" href="../../api/ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.html">ViewModels</a></h6>
  <h6><strong>Assembly</strong>: ParmaGIS.WPF.Modules.Parma.UI.dll</h6>
  <h5 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_syntax">Syntax</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public class CatalogCardViewModel : CardViewModelBase, INotifyPropertyChanged, IDisposable</code></pre>
  </div>
  <h3 id="constructors">Constructors
  </h3>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel__ctor.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.%23ctor%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L21">View Source</a>
  </span>
  <a id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel__ctor_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.#ctor*"></a>
  <h4 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel__ctor" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.#ctor">CatalogCardViewModel()</h4>
  <div class="markdown level1 summary"></div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public CatalogCardViewModel()</code></pre>
  </div>
  <h3 id="properties">Properties
  </h3>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_AddCommand.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.AddCommand%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L65">View Source</a>
  </span>
  <a id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_AddCommand_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.AddCommand*"></a>
  <h4 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_AddCommand" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.AddCommand">AddCommand</h4>
  <div class="markdown level1 summary"></div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public RelayCommand AddCommand { get; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.RelayCommand.html">RelayCommand</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_DeleteCommand.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.DeleteCommand%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L71">View Source</a>
  </span>
  <a id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_DeleteCommand_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.DeleteCommand*"></a>
  <h4 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_DeleteCommand" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.DeleteCommand">DeleteCommand</h4>
  <div class="markdown level1 summary"></div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public RelayCommand DeleteCommand { get; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.RelayCommand.html">RelayCommand</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_SaveCommand.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.SaveCommand%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L68">View Source</a>
  </span>
  <a id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_SaveCommand_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.SaveCommand*"></a>
  <h4 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_SaveCommand" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.SaveCommand">SaveCommand</h4>
  <div class="markdown level1 summary"></div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public RelayCommand SaveCommand { get; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="../../api/ParmaGIS.WPF.UI.Utilities.RelayCommand.html">RelayCommand</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_Source.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.Source%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L30">View Source</a>
  </span>
  <a id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_Source_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.Source*"></a>
  <h4 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_Source" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.Source">Source</h4>
  <div class="markdown level1 summary"></div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public ObservableCollection&lt;object&gt; Source { get; set; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.collections.objectmodel.observablecollection-1">ObservableCollection</a><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object">object</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <h3 id="methods">Methods
  </h3>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_AddItem.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.AddItem%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L36">View Source</a>
  </span>
  <a id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_AddItem_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.AddItem*"></a>
  <h4 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_AddItem" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.AddItem">AddItem()</h4>
  <div class="markdown level1 summary"></div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public void AddItem()</code></pre>
  </div>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_DeleteItem_System_Object_.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.DeleteItem(System.Object)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L41">View Source</a>
  </span>
  <a id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_DeleteItem_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.DeleteItem*"></a>
  <h4 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_DeleteItem_System_Object_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.DeleteItem(System.Object)">DeleteItem(object)</h4>
  <div class="markdown level1 summary"></div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public void DeleteItem(object item)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object">object</a></td>
        <td><span class="parametername">item</span></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_Load_System_Object_.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.Load(System.Object)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L57">View Source</a>
  </span>
  <a id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_Load_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.Load*"></a>
  <h4 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_Load_System_Object_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.Load(System.Object)">Load(object?)</h4>
  <div class="markdown level1 summary"></div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">protected override void Load(object? parameter)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object">object</a></td>
        <td><span class="parametername">parameter</span></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <h5 class="overrides">Overrides</h5>
  <div><a class="xref" href="../../api/ParmaGIS.WPF.Modules.ObjectExplorerTool.Card.CardViewModelBase.html#ParmaGIS_WPF_Modules_ObjectExplorerTool_Card_CardViewModelBase_Load_System_Object_">CardViewModelBase.Load(object?)</a></div>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_SaveItems.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.SaveItems%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L50">View Source</a>
  </span>
  <a id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_SaveItems_" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.SaveItems*"></a>
  <h4 id="ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel_SaveItems" data-uid="ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel.SaveItems">SaveItems()</h4>
  <div class="markdown level1 summary"></div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public void SaveItems()</code></pre>
  </div>
  <h3 id="implements">Implements</h3>
  <div>
      <a class="xref" href="https://learn.microsoft.com/dotnet/api/system.componentmodel.inotifypropertychanged">INotifyPropertyChanged</a>
  </div>
  <div>
      <a class="xref" href="https://learn.microsoft.com/dotnet/api/system.idisposable">IDisposable</a>
  </div>
  <h3 id="extensionmethods">Extension Methods</h3>
  <div>
      <a class="xref" href="../../api/ParmaGIS.Core.UI.Reactive.URExtensions.html#ParmaGIS_Core_UI_Reactive_URExtensions_ToURPropertyWithHistory2__2___0_System_Linq_Expressions_Expression_System_Func___0___1___System_Action___1____1_ParmaGIS_Core_UI_Reactive_URHistory_System_Collections_Generic_ICollection_System_IDisposable__">URExtensions.ToURPropertyWithHistory2&lt;TSubject, TProperty&gt;(TSubject, Expression&lt;Func&lt;TSubject, TProperty&gt;&gt;, Action&lt;TProperty&gt;, TProperty, URHistory, ICollection&lt;IDisposable&gt;)</a>
  </div>
  <div>
      <a class="xref" href="../../api/ParmaGIS.Core.UI.Reactive.URExtensions.html#ParmaGIS_Core_UI_Reactive_URExtensions_ToURPropertyWithHistory__2___0_System_Linq_Expressions_Expression_System_Func___0___1___System_Func___1_System_Collections_IEnumerable__System_Action___1____1_ParmaGIS_Core_UI_Reactive_URHistory_System_Collections_Generic_ICollection_System_IDisposable__">URExtensions.ToURPropertyWithHistory&lt;TSubject, TProperty&gt;(TSubject, Expression&lt;Func&lt;TSubject, TProperty&gt;&gt;, Func&lt;TProperty, IEnumerable?&gt;, Action&lt;TProperty&gt;, TProperty, URHistory, ICollection&lt;IDisposable&gt;)</a>
  </div>
</article>
          </div>
          
          <div class="hidden-sm col-md-2" role="complementary">
            <div class="sideaffix">
              <div class="contribution">
                <ul class="nav">
                  <li>
                    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/new/origin/master/apiSpec/new?filename=ParmaGIS_WPF_Modules_Parma_UI_Cards_ViewModels_CatalogCardViewModel.md&amp;value=---%0Auid%3A%20ParmaGIS.WPF.Modules.Parma.UI.Cards.ViewModels.CatalogCardViewModel%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A" class="contribution-link">Improve this Doc</a>
                  </li>
                  <li>
                    <a href="https://github.com/ParmaGIS/ParmaGIS.Net/blob/origin/master/platforms/wpf/modules/ParmaGIS.WPF.Modules.Parma.UI/Cards/ViewModels/CatalogCardViewModel.cs/#L19" class="contribution-link">View Source</a>
                  </li>
                </ul>
              </div>
              <nav class="bs-docs-sidebar hidden-print hidden-xs hidden-sm affix" id="affix">
                <h5>In This Article</h5>
                <div></div>
              </nav>
            </div>
          </div>
        </div>
      </div>
      
      <footer>
        <div class="grad-bottom"></div>
        <div class="footer">
          <div class="container">
            <span class="pull-right">
              <a href="#top">Back to top</a>
            </span>
            
            <span>Generated by <strong>DocFX</strong></span>
          </div>
        </div>
      </footer>
    </div>
    
    <script type="text/javascript" src="../../styles/docfx.vendor.js"></script>
    <script type="text/javascript" src="../../styles/docfx.js"></script>
    <script type="text/javascript" src="../../styles/main.js"></script>
  </body>
</html>
