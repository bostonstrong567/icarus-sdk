// /Game/BP/Objects/World/Items/Back/BP_Back_SlugLauncher.BP_Back_SlugLauncher_C
// Derives from: ABP_Back_Item_Base_C > AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Back_SlugLauncher_C : public ABP_Back_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Guard;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Muzzle;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Loader;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Core;  // 0x05A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Backpack;  // 0x05A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x05B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool GunVisible;  // 0x05B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMeshComponent*> UpgradeSlots;  // 0x05C0, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_Back_SlugLauncher(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FocusedItemUpdated();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_GunVisible();
    UFUNCTION(BlueprintCallable) void UpdateGunVisbility();
};
