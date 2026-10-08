// /Game/UI/Components/UMG_ProspectRewardLegendary2.UMG_ProspectRewardLegendary2_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2D9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectRewardLegendary2_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Blueprint;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Check;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* IconSizeBox;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Item;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle LegendaryUnlock;  // 0x02C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUnlocked;  // 0x02D8, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectRewardLegendary2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Reward(FItemTemplateRowHandle Item);  // parameters 0x18, named "Set Reward"
};
