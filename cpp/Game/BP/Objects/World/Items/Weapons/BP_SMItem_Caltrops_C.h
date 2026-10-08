// /Game/BP/Objects/World/Items/Weapons/BP_SMItem_Caltrops.BP_SMItem_Caltrops_C
// Derives from: AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SMItem_Caltrops_C : public AStaticItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OverlapDamage;  // 0x0590, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InitialHitDamage;  // 0x0594, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayerDamageMultiplier;  // 0x0598, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> OverlapClassToDamage;  // 0x05A0, size 0x8

    UFUNCTION() void BndEvt__BP_Payload_Rock_Golem_Grenade_Caltrops_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void DoDamage(int32 DamageAmount, AActor* Defender);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_SMItem_Caltrops(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OverlapChecks();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
