// /Game/BP/AI/Bosses/Misc/BP_GreatApe_Rock.BP_GreatApe_Rock_C
// Derives from: ASkeletalProjectile > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5AD, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GreatApe_Rock_C : public ASkeletalProjectile
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RotationSpeed;  // 0x05A0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HitGround;  // 0x05AC, size 0x1

    UFUNCTION() void BndEvt__BP_GreatApe_Rock_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_GreatApe_Rock(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
