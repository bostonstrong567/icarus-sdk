// /Game/BP/Quests/Implementations/Bw6_Scan/BP_BW6_Scan.BP_BW6_Scan_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW6_Scan_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLocationComplete LocationComplete;  // 0x0470, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_BW6_Scan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LocationComplete__DelegateSignature(int32 Location);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
