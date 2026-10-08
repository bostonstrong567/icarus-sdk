// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Smoke_Grenade.BP_Payload_Smoke_Grenade_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x448, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Smoke_Grenade_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* ObstructionSphere;  // 0x0408, size 0x8
    UPROPERTY() float ScaleObstructionSphere_Alpha_6AAB4C594977950FACA4FBB3431D3EE5;  // 0x0410, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> ScaleObstructionSphere__Direction_6AAB4C594977950FACA4FBB3431D3EE5;  // 0x0414, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* ScaleObstructionSphere;  // 0x0418, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SmokeTime;  // 0x0420, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* SmokeEffect;  // 0x0428, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FmodComponent;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SmokeRadius;  // 0x0438, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* SmokeMainVFX;  // 0x0440, size 0x8

    UFUNCTION(BlueprintCallable) void DestroyEverythingElse();
    UFUNCTION(BlueprintCallable) void DestroySmoke();
    UFUNCTION() void ExecuteUbergraph_BP_Payload_Smoke_Grenade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION() void ScaleObstructionSphere__FinishedFunc();
    UFUNCTION() void ScaleObstructionSphere__UpdateFunc();
    UFUNCTION(BlueprintCallable) void ScaleSphere(bool ScaleUp);  // parameters 0x1
};
