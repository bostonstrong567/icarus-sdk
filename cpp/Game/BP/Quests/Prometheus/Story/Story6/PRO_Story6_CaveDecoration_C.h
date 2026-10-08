// /Game/BP/Quests/Prometheus/Story/Story6/PRO_Story6_CaveDecoration.PRO_Story6_CaveDecoration_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x300, a blueprint class, blueprint

UCLASS(Config=Engine)
class APRO_Story6_CaveDecoration_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> DecalMaterials;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> DecalTransforms;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> LightTransforms;  // 0x02F0, size 0x10

    UFUNCTION() void ExecuteUbergraph_PRO_Story6_CaveDecoration(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
