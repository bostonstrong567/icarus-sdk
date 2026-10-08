// /Game/BP/AI/Events/BP_AIEvent_Test.BP_AIEvent_Test_C
// Derives from: AAIEvent > AActor > UObject
// size 0x258, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AIEvent_Test_C : public AAIEvent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0250, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_AIEvent_Test(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void SetupEvent(FAIEventsRowHandle Event, AActor* EventInstigator);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void TickEvent(float DeltaTime);  // parameters 0x4
};
