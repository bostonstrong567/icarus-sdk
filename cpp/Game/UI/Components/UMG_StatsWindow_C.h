// /Game/UI/Components/UMG_StatsWindow.UMG_StatsWindow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_StatsWindow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Backglow;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Container;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UOverlay* Overlay;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_StatList_C* CurrentStatList;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxVerticalElements;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentElements;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Bound;  // 0x0298, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* BoundActor;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideZeroStats;  // 0x02A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoInitialise;  // 0x02A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantsStatUpdate;  // 0x02AA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FWindowClosed WindowClosed;  // 0x02B0, size 0x10

    UFUNCTION(BlueprintCallable) void AddWidget(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateList();
    UFUNCTION() void ExecuteUbergraph_UMG_StatsWindow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(AActor* BoundActor);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update();
    UFUNCTION(BlueprintCallable) void UpdateStats();
    UFUNCTION(BlueprintCallable) void WindowClosed__DelegateSignature();
};
