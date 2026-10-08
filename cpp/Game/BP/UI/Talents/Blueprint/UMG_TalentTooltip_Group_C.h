// /Game/BP/UI/Talents/Blueprint/UMG_TalentTooltip_Group.UMG_TalentTooltip_Group_C
// Derives from: UTalentTooltipWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentTooltip_Group_C : public UTalentTooltipWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* background;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Base;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BenchIcons;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BlueprintName;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CostAmount;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CostSection;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CraftedAtOverlay;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CraftingLocation;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ExpandProgressBar;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* OverallSize;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RequiredMatsSection;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TopGlow;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockImage;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle OldTalent;  // 0x02F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessorRecipesRowHandle Recipe;  // 0x0310, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasMaterials;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> Blacklist;  // 0x0330, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentTooltip_Group(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
