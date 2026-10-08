// /Game/BP/AI/Bosses/Misc/BP_Mammoth_Ice_Projectile.BP_Mammoth_Ice_Projectile_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5AD, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mammoth_Ice_Projectile_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ProjectileTrail;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x05A0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishedMoving;  // 0x05AC, size 0x1

    UFUNCTION() void BndEvt__BP_Mammoth_Ice_Projectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_Mammoth_Ice_Projectile(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
