// /Game/BP/Objects/World/Resources/Meta/BP_Uranium_Emitter.BP_Uranium_Emitter_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2DD, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Uranium_Emitter_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radiation_Sphere_01;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RadiationDistance;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool EmittingRadiation;  // 0x02DC, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Uranium_Emitter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
