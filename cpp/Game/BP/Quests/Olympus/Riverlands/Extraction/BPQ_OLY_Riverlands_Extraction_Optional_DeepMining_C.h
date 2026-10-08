// /Game/BP/Quests/Olympus/Riverlands/Extraction/BPQ_OLY_Riverlands_Extraction_Optional_DeepMining.BPQ_OLY_Riverlands_Extraction_Optional_DeepMining_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Extraction_Optional_DeepMining_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Specified_Color;  // 0x0474, size 0x10, named "Specified Color"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Texture_Override;  // 0x0488, size 0x8, named "Texture Override"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Extraction_Optional_DeepMining(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
