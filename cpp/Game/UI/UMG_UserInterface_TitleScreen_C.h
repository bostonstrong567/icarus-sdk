// /Game/UI/UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C
// Derives from: UUMG_UserInterface_Base_C > UUserInterfaceBase > UUserWidget > UWidget > UVisual > UObject
// size 0x460, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_UserInterface_TitleScreen_C : public UUMG_UserInterface_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ConfirmationScaleBox;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ErrorCodeBox;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ErrorCodeScaleBox;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* LoadingScreenScaleBox;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Menus;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* TickerSizeBox;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_ButtonIcon_C_0;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ClientLogging_C* UMG_ClientLogging;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ConfirmationPopup_C* UMG_ConfirmationPopup;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ConnectingOverlay_C* UMG_ConnectingOverlay;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ErrorCodeDisplay_C* UMG_ErrorCodeDisplay;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIndicator_C* UMG_FeatureLevelIndicator;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingScreen_C* UMG_LoadingScreen;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_QueueWindow_C* UMG_QueueWindow;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RevisionNumber_C* UMG_RevisionNumber;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ServerMessageTicker_C* UMG_ServerMessageTicker;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TitleScreen_Background_C* UMG_TitleScreen_Background;  // 0x0448, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* CurrentDynamicWidget;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UOfflineAccountMigrator* OfflineAccountMigratorTest;  // 0x0458, size 0x8

    UFUNCTION() void BndEvt__UMG_ButtonIcon_C_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_QueueWindow_K2Node_ComponentBoundEvent_0_Close__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintImplementableEvent) void DisplayIcarusError(FErrorCodesEnum OutgoingError, FString ErrorInfo);  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_UMG_UserInterface_TitleScreen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusDynamicWidget(UUserWidget* DynamicWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfirmationWindow(UUMG_ConfirmationPopup_C*& ConfirmationWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIcarusLogWindow(UUMG_ClientLogging_C*& LogWindow);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideErrorCode();
    UFUNCTION(BlueprintCallable) void HideLoadingScreen();
    UFUNCTION(BlueprintCallable) void ShowLoadingScreen(FText Optional_Message, UWidget* OptionalWidget);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void UpdateMaintenaceText();
    UFUNCTION(BlueprintCallable) void UpdateQueue();
};
