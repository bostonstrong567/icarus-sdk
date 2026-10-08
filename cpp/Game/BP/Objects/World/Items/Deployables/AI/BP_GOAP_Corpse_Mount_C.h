// /Game/BP/Objects/World/Items/Deployables/AI/BP_GOAP_Corpse_Mount.BP_GOAP_Corpse_Mount_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GOAP_Corpse_Mount_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x07A8, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName MountName;  // 0x07B0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_GOAP_Corpse_Mount(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_Unstuck(FVector NewLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnInventoryItemRemoved(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnItemRemovedVerbose(UInventory* Inventory, int32 Location, const FItemData& Item);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void SetupMountCorpse();
};
