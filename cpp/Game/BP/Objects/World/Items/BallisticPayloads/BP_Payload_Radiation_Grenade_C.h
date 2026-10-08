// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Radiation_Grenade.BP_Payload_Radiation_Grenade_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Radiation_Grenade_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0410, size 0x8
    UPROPERTY() float FadeLight_Alpha_573C4C634A5A6595D453408122975927;  // 0x0418, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FadeLight__Direction_573C4C634A5A6595D453408122975927;  // 0x041C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FadeLight;  // 0x0420, size 0x8
    UPROPERTY() float GrowSphere_Alpha_4194328F4606C50AFBC471AE70E29D1D;  // 0x0428, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> GrowSphere__Direction_4194328F4606C50AFBC471AE70E29D1D;  // 0x042C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* GrowSphere;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerRadius;  // 0x0438, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultRadius;  // 0x043C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultDamage;  // 0x0440, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynMatInner;  // 0x0448, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynMatOuter;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AOE_Lifetime;  // 0x0458, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ProxyRadiationActor_C* ProxyRadiationActor;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> HitActors;  // 0x0468, size 0x10

    UFUNCTION(BlueprintCallable) void ApplyModifiers();
    UFUNCTION() void ExecuteUbergraph_BP_Payload_Radiation_Grenade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FadeInOut(bool FadeIn);  // parameters 0x1
    UFUNCTION() void FadeLight__FinishedFunc();
    UFUNCTION() void FadeLight__UpdateFunc();
    UFUNCTION(BlueprintCallable) void GetExplosiveAttributes(float& Damage, float& Radius);  // parameters 0x8
    UFUNCTION(BlueprintCallable) int32 GetNextUID();  // parameters 0x4
    UFUNCTION() void GrowSphere__FinishedFunc();
    UFUNCTION() void GrowSphere__UpdateFunc();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void SpawningComplete();
};
