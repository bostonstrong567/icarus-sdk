// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_WeaponRackBase.BP_WeaponRackBase_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x778, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WeaponRackBase_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMeshComponent*> WeaponSKMeshes;  // 0x0730, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasFoundTag;  // 0x0740, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<WeaponRackTransform> WeaponRotationStruct;  // 0x0748, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentIndex;  // 0x0758, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMeshComponent*> TempMeshComponents;  // 0x0760, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* AddWeaponAudio;  // 0x0770, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_WeaponRackBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void ItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_WeaponAddedAudio();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetWeaponTransforms();
    UFUNCTION(BlueprintCallable) void SpawnLivingWeaponComponents(const FItemData& ItemData);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void UpdateWeapon(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void WeaponAddedAudio(USceneComponent* Location);  // parameters 0x8
};
