// /Game/BP/Settlement/UMG/UMG_SettlementNPCSkill.UMG_SettlementNPCSkill_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettlementNPCSkill_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DurabilityOverlay;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Bonus;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Bar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Bonus1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Bonus2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_Level;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_BonusMultiplier;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Title;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentLevel;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxLevel;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BoostLevel;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCSkillsRowHandle Skill;  // 0x02BC, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SettlementNPCSkill(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Update(int32 CurrentLevel, int32 MaxLevel, int32 BoostLevel);  // parameters 0xC
};
