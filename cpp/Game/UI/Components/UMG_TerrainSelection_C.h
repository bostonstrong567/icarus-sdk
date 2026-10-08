// /Game/UI/Components/UMG_TerrainSelection.UMG_TerrainSelection_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TerrainSelection_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Fade;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* DevelopmentProspects;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Terrains;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LowerGradient;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Noise;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TerrainButton_C* TerrainButton_ELY;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TerrainButton_C* TerrainButton_PRO;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TerrainButton_C* TerrainButton_STYX;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TerrainButton_C* UMG_TerrainButton_Olympus;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UpperGradient;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FTalentArchetypeSelected TalentArchetypeSelected;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBackButtonClicked BackButtonClicked;  // 0x02E0, size 0x10

    UFUNCTION(BlueprintCallable) void BackButtonClicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TerrainSelection_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TerrainSelection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FadeAnimFinished();
    UFUNCTION(BlueprintCallable) void OnHovered(UTexture2D* Image);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TalentArchetypeSelected__DelegateSignature(FTalentArchetypesRowHandle Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void TerrainSelected(FTalentArchetypesRowHandle Terrain);  // parameters 0x18
};
