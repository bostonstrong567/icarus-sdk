// /Game/BP/Objects/World/Items/Shields/BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x780, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Shield_Back_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemData ShieldItem;  // 0x0590, size 0x1F0

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Shield_Back(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnLoaded_80ED98D14DF2AA1232DDA287390DB216(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_Item_Data();  // named "OnRep_Item Data"
    UFUNCTION(BlueprintCallable) void UpdateShieldItem();
};
