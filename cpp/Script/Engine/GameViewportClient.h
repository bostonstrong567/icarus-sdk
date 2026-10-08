// /Script/Engine.GameViewportClient
// Derives from: UScriptViewportClient > UObject
// size 0x360, declared in Engine/Source/Runtime/Engine/Classes/Engine/GameViewportClient.h

UCLASS(Transient, Config=Engine)
class UGameViewportClient : public UScriptViewportClient
{
public:
    UPROPERTY() UConsole* ViewportConsole;  // 0x0040, size 0x8
    UPROPERTY() TArray<FDebugDisplayProperty> DebugProperties;  // 0x0048, size 0x10
    UPROPERTY(Config) int32 MaxSplitscreenPlayers;  // 0x0068, size 0x4
    UPROPERTY() UWorld* World;  // 0x0078, size 0x8
    UPROPERTY() UGameInstance* GameInstance;  // 0x0080, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<FSplitscreenData,TSizedDefaultAllocator<32> > SplitscreenInfo;  // 0x0058
    uint32 : 1 bShowTitleSafeZone;  // 0x006C
    uint32 : 1 bIsPlayInEditorViewport;  // 0x006C
    uint32 : 1 bDisableWorldRendering;  // 0x006C
    TEnumAsByte<enum ESplitScreenType::Type> ActiveSplitscreenType;  // 0x0070, protected
    bool bSuppressTransitionMessage;  // 0x0088, protected
    FAudioDeviceHandle AudioDevice;  // 0x0090, protected
    FDelegateHandle AudioDeviceDestroyedHandle;  // 0x00A8, protected
    int32 ViewModeIndex;  // 0x00B0
    FEngineShowFlags EngineShowFlags;  // 0x00B8
    FViewport * Viewport;  // 0x00E0
    FViewportFrame * ViewportFrame;  // 0x00E8
    uint32 AudioDeviceHandle;  // 0x00F0, protected
    bool bHasAudioFocus;  // 0x00F4, protected
    TWeakPtr<SWindow,0> Window;  // 0x00F8, private
    TWeakPtr<SOverlay,0> ViewportOverlayWidget;  // 0x0108, private
    TWeakPtr<IGameLayerManager,0> GameLayerManagerPtr;  // 0x0118, private
    FName CurrentBufferVisualizationMode;  // 0x0128, private
    TWeakPtr<SWindow,0> HighResScreenshotDialog;  // 0x0130, private
    TMap<FName,void *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,void *,0> > HardwareCursorCache;  // 0x0140, private
    TMap<enum EMouseCursor::Type,void *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EMouseCursor::Type,void *,0> > HardwareCursors;  // 0x0190, private
    TMap<enum EMouseCursor::Type,TSharedPtr<SWidget,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EMouseCursor::Type,TSharedPtr<SWidget,0>,0> > CursorWidgets;  // 0x01E0, private
    bool bUseSoftwareCursorWidgets;  // 0x0230, private
    TMulticastDelegate<void __cdecl(FViewport *),FDefaultDelegateUserPolicy> CloseRequestedDelegate;  // 0x0238, private
    TDelegate<bool __cdecl(void),FDefaultDelegateUserPolicy> WindowCloseRequestedDelegate;  // 0x0250, private
    TMulticastDelegate<void __cdecl(int),FDefaultDelegateUserPolicy> PlayerAddedDelegate;  // 0x0260, private
    TMulticastDelegate<void __cdecl(int),FDefaultDelegateUserPolicy> PlayerRemovedDelegate;  // 0x0278, private
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> BeginDrawDelegate;  // 0x0290, private
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> DrawnDelegate;  // 0x02A8, private
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> EndDrawDelegate;  // 0x02C0, private
    TMulticastDelegate<void __cdecl(float),FDefaultDelegateUserPolicy> TickDelegate;  // 0x02D8, private
    TMulticastDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> ToggleFullscreenDelegate;  // 0x02F0, private
    TDelegate<bool __cdecl(unsigned int,TSharedPtr<SWidget,0>),FDefaultDelegateUserPolicy> CustomNavigationEvent;  // 0x0308, private
    TMulticastDelegate<void __cdecl(FInputKeyEventArgs const &),FDefaultDelegateUserPolicy> OnInputKeyEvent;  // 0x0318, private
    TMulticastDelegate<void __cdecl(FViewport *,int,FKey,float,float,int,bool),FDefaultDelegateUserPolicy> OnInputAxisEvent;  // 0x0330, private
    FStatUnitData * StatUnitData;  // 0x0348, private
    FStatHitchesData * StatHitchesData;  // 0x0350, private
    bool bDisableSplitScreenOverride;  // 0x0358, private
    bool bIgnoreInput;  // 0x0359, private
    EMouseCaptureMode MouseCaptureMode;  // 0x035A, private
    bool bHideCursorDuringCapture;  // 0x035B, private
    EMouseLockMode MouseLockMode;  // 0x035C, private
    bool bIsMouseOverClient;  // 0x035D, private

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
