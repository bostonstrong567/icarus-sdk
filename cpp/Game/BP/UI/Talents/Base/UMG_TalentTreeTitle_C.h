// /Game/BP/UI/Talents/Base/UMG_TalentTreeTitle.UMG_TalentTreeTitle_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentTreeTitle_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CurrentRankTitle;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* Desaturator;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* NextRank;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* RankBox;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProgressBar_C* RankProgress;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RankProgressPreview;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Title;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentTreesRowHandle TalentTree;  // 0x02A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTalentModelInterface_Const* Model;  // 0x02B8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateTooltips();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentTreeTitle(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RefreshRankBar(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Talent_Hovered(UUMG_Talent_Base_C* Talent);  // parameters 0x8, named "Talent Hovered"
    UFUNCTION(BlueprintCallable) void Talent_Unhovered();  // named "Talent Unhovered"
};
