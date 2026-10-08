// /Game/BP/AI/GOAP/Misc/BP_FlammableArea_Medium.BP_FlammableArea_Medium_C
// Derives from: ABP_FlammableArea_C > AGameplayTagActor > AActor > UObject
// size 0x2A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FlammableArea_Medium_C : public ABP_FlammableArea_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Fire_Loop;  // 0x0280, size 0x8, named "FMOD Fire Loop"
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Bloom;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Fire_FX;  // 0x0298, size 0x8

    UFUNCTION(BlueprintCallable) void CleanupVFX();
    UFUNCTION() void ExecuteUbergraph_BP_FlammableArea_Medium(int32 EntryPoint);  // parameters 0x4
};
