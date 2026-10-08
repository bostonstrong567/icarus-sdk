// /Game/UI/Windows/Umg_GeneticsDisplay.Umg_GeneticsDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUmg_GeneticsDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AccessDisplay;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Phenotype;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Sex;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* SexBox;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SexImage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUmg_GeneticLineage_C* Umg_GeneticLineage;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUmg_GeneticValues_C* Umg_GeneticValues;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Titlebar_C* UMG_Titlebar;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02B8, size 0x8

    UFUNCTION() void BndEvt__Umg_GeneticsDisplay_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_Umg_GeneticsDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneticsUpdated();
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LineageUpdated();
    UFUNCTION(BlueprintCallable) void SexUpdated();
    UFUNCTION(BlueprintCallable) void SkinUpdated();
};
