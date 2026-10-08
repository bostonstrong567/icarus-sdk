// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_SulfurWorm_Spit.BP_Payload_SulfurWorm_Spit_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x438, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_SulfurWorm_Spit_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_SpitHit_FX;  // 0x0410, size 0x8
    UPROPERTY() float LightFade_Intensity_E5EF3F4C4B26842D2BCF79BB48C7032C;  // 0x0418, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> LightFade__Direction_E5EF3F4C4B26842D2BCF79BB48C7032C;  // 0x041C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* LightFade;  // 0x0420, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> AffectedActors;  // 0x0428, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_Payload_SulfurWorm_Spit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void LightFade__FinishedFunc();
    UFUNCTION() void LightFade__UpdateFunc();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
