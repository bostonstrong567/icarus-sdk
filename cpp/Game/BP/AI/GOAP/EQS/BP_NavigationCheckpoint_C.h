// /Game/BP/AI/GOAP/EQS/BP_NavigationCheckpoint.BP_NavigationCheckpoint_C
// Derives from: AActor > UObject
// size 0x242, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_NavigationCheckpoint_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TextRender;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsValid;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PrintFailures;  // 0x0241, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_NavigationCheckpoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool IsCheckpointValid();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void ValidateCheckpoint();
};
