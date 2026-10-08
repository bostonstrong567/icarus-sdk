// /Game/UI/Windows/UMG_MissionSpecialReward_Legendary.UMG_MissionSpecialReward_Legendary_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionSpecialReward_Legendary_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Unlocks;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLivingItemShopItemsRowHandle> LegendaryUnlocks;  // 0x0270, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionSpecialReward_Legendary(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup();
};
