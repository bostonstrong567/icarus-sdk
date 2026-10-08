// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_IceBatNest.BP_Mission_IceBatNest_C
// Derives from: ABP_BatNest_Arctic_C > ABP_BatNest_C > ABP_Nest_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x4E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_IceBatNest_C : public ABP_BatNest_Arctic_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour4;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour2;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour1;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour5;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour3;  // 0x04E0, size 0x8

    UFUNCTION() void BndEvt__BP_Mission_IceMammoth_Corpse_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_IceBatNest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void ModifyRotation(FRotator Input, FRotator& Output);  // parameters 0x18
};
