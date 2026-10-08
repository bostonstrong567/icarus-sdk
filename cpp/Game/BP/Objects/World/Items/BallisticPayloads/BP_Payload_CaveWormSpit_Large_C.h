// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_CaveWormSpit_Large.BP_Payload_CaveWormSpit_Large_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x438, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_CaveWormSpit_Large_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_SpitHit_FX;  // 0x0410, size 0x8
    UPROPERTY() float LightFade_Intensity_267A0A4D4AD66387C6A9D5AC8EEED39F;  // 0x0418, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> LightFade__Direction_267A0A4D4AD66387C6A9D5AC8EEED39F;  // 0x041C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* LightFade;  // 0x0420, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> EffectedActors;  // 0x0428, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_Payload_CaveWormSpit_Large(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetModifierFromAtmosphere(FAtmospheresEnum Atmosphere, FModifier& OutModifier);  // parameters 0x30
    UFUNCTION() void LightFade__FinishedFunc();
    UFUNCTION() void LightFade__UpdateFunc();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
