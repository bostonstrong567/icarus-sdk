// /Game/BP/Objects/World/Items/Deployables/Trophies/BP_Trophy_Sandworm_1.BP_Trophy_Sandworm_1_C
// Derives from: ABP_Light_Fire_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x780, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trophy_Sandworm_1_C : public ABP_Light_Fire_Base_C, public IBP_WeatherInteractable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_Trophy;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0778, size 0x8

    UFUNCTION(BlueprintCallable) void Ash(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DeactivateCampfire();
    UFUNCTION() void ExecuteUbergraph_BP_Trophy_Sandworm_1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Rain(int32 Millilitres);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Sand(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Snow(float Intensity);  // parameters 0x4
};
