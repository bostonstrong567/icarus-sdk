// /Game/BP/Objects/World/Items/Deployables/Decorations/Bowls/UMG_Bowl_Window.UMG_Bowl_Window_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Bowl_Window_C : public UUMG_IcarusLinkedActorPanel_C, public IBPI_Bowl_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* ColorSelectionPanel;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* ConfirmButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFontColorChanged FontColorChanged;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Pet_Bowl_Water_Base_C* WaterBowlReference;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Pet_Bowl_Food_Base_C* FoodBowlReference;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> CachedSupportedColors;  // 0x02C0, size 0x10

    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Bowl_Window(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FontColorChanged__DelegateSignature(FLinearColor NewColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InitalizeBowl(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnColorSelected(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProxyUpdateColor(int32 ColorIndex, ADeployable* BowlDeployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetBowlColorIndex(int32 ColorIndex);  // parameters 0x4
};
