// /Game/UI/Components/UMG_ProspectRewardBlueprint.UMG_ProspectRewardBlueprint_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2D1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectRewardBlueprint_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Blueprint;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Check;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Item;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle BlueprintUnlock;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUnlocked;  // 0x02D0, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectRewardBlueprint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Reward(FItemTemplateRowHandle Item);  // parameters 0x18, named "Set Reward"
};
