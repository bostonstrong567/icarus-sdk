// /Script/Engine.GameViewportClient
// Derives from: UScriptViewportClient > UObject
// size 0x360, declared in Engine/Source/Runtime/Engine/Classes/Engine/GameViewportClient.h

UCLASS(Transient, Config=Engine)
class UGameViewportClient : public UScriptViewportClient
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() UConsole* ViewportConsole;  // 0x0040, size 0x8
    UPROPERTY() TArray<FDebugDisplayProperty> DebugProperties;  // 0x0048, size 0x10
    TArray<FSplitscreenData,TSizedDefaultAllocator<32> > SplitscreenInfo;  // 0x0058, not reflected
    UPROPERTY(Config) int32 MaxSplitscreenPlayers;  // 0x0068, size 0x4
    uint32 : 1 bDisableWorldRendering;  // 0x006C, not reflected
    uint32 : 1 bIsPlayInEditorViewport;  // 0x006C, not reflected
    uint32 : 1 bShowTitleSafeZone;  // 0x006C, not reflected
    int32 ViewModeIndex;  // 0x00B0, not reflected
    FEngineShowFlags EngineShowFlags;  // 0x00B8, not reflected
    FViewport * Viewport;  // 0x00E0, not reflected
    FViewportFrame * ViewportFrame;  // 0x00E8, not reflected
protected:
    TEnumAsByte<enum ESplitScreenType::Type> ActiveSplitscreenType;  // 0x0070, not reflected
    UPROPERTY() UWorld* World;  // 0x0078, size 0x8
    UPROPERTY() UGameInstance* GameInstance;  // 0x0080, size 0x8
    bool bSuppressTransitionMessage;  // 0x0088, not reflected
    FAudioDeviceHandle AudioDevice;  // 0x0090, not reflected
    FDelegateHandle AudioDeviceDestroyedHandle;  // 0x00A8, not reflected
    uint32 AudioDeviceHandle;  // 0x00F0, not reflected
    bool bHasAudioFocus;  // 0x00F4, not reflected
private:
    TWeakPtr<SWindow,0> Window;  // 0x00F8, not reflected
    TWeakPtr<SOverlay,0> ViewportOverlayWidget;  // 0x0108, not reflected
    TWeakPtr<IGameLayerManager,0> GameLayerManagerPtr;  // 0x0118, not reflected
    FName CurrentBufferVisualizationMode;  // 0x0128, not reflected
    TWeakPtr<SWindow,0> HighResScreenshotDialog;  // 0x0130, not reflected
    TMap<FName,void *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,void *,0> > HardwareCursorCache;  // 0x0140, not reflected
    TMap<enum EMouseCursor::Type,void *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EMouseCursor::Type,void *,0> > HardwareCursors;  // 0x0190, not reflected
    TMap<enum EMouseCursor::Type,TSharedPtr<SWidget,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EMouseCursor::Type,TSharedPtr<SWidget,0>,0> > CursorWidgets;  // 0x01E0, not reflected
    bool bUseSoftwareCursorWidgets;  // 0x0230, not reflected
    TMulticastDelegate<void __cdecl(FViewport *),FDefaultDelegateUserPolicy> CloseRequestedDelegate;  // 0x0238, not reflected
    TDelegate<bool __cdecl(void),FDefaultDelegateUserPolicy> WindowCloseRequestedDelegate;  // 0x0250, not reflected
    TMulticastDelegate<void __cdecl(int),FDefaultDelegateUserPolicy> PlayerAddedDelegate;  // 0x0260, not reflected
    TMulticastDelegate<void __cdecl(int),FDefaultDelegateUserPolicy> PlayerRemovedDelegate;  // 0x0278, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> BeginDrawDelegate;  // 0x0290, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> DrawnDelegate;  // 0x02A8, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> EndDrawDelegate;  // 0x02C0, not reflected
    TMulticastDelegate<void __cdecl(float),FDefaultDelegateUserPolicy> TickDelegate;  // 0x02D8, not reflected
    TMulticastDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> ToggleFullscreenDelegate;  // 0x02F0, not reflected
    TDelegate<bool __cdecl(unsigned int,TSharedPtr<SWidget,0>),FDefaultDelegateUserPolicy> CustomNavigationEvent;  // 0x0308, not reflected
    TMulticastDelegate<void __cdecl(FInputKeyEventArgs const &),FDefaultDelegateUserPolicy> OnInputKeyEvent;  // 0x0318, not reflected
    TMulticastDelegate<void __cdecl(FViewport *,int,FKey,float,float,int,bool),FDefaultDelegateUserPolicy> OnInputAxisEvent;  // 0x0330, not reflected
    FStatUnitData * StatUnitData;  // 0x0348, not reflected
    FStatHitchesData * StatHitchesData;  // 0x0350, not reflected
    bool bDisableSplitScreenOverride;  // 0x0358, not reflected
    bool bIgnoreInput;  // 0x0359, not reflected
    EMouseCaptureMode MouseCaptureMode;  // 0x035A, not reflected
    bool bHideCursorDuringCapture;  // 0x035B, not reflected
    EMouseLockMode MouseLockMode;  // 0x035C, not reflected
    bool bIsMouseOverClient;  // 0x035D, not reflected
public:
    UFUNCTION(Exec) void SSSwapControllers();
    UFUNCTION(Exec) void SetConsoleTarget(int32 PlayerIndex);  // parameters 0x4
    UFUNCTION(Exec) void ShowTitleSafeArea();

    // Virtual functions that start here:
    //   AddViewportWidgetContent, AddViewportWidgetForPlayer, ConsoleCommand, DetachViewportClient
    //   DrawTitleSafeArea, DrawTransition, DrawTransitionMessage, FinalizeViews, GetMousePosition
    //   GetSubtitleRegion, Init, LayoutPlayers, NotifyPlayerAdded, NotifyPlayerRemoved
    //   PeekNetworkFailureMessages, PeekTravelFailureMessages, PostRender, RemoveViewportWidgetContent
    //   RemoveViewportWidgetForPlayer, SSSwapControllers, SetConsoleTarget, SetDropDetail, SetViewport
    //   SetViewportFrame, SetupInitialLocalPlayer, ShowTitleSafeArea, Tick, UpdateActiveSplitscreenType
    //   VerifyPathRenderingComponents
};
