// /Game/BP/Objects/World/Items/WorldObjects/Missions/PRO_D/BP_WorldObject_Dummy_Speaker.BP_WorldObject_Dummy_Speaker_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x348, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldObject_Dummy_Speaker_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DialogueAudio;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueSpeakerRowHandle DialogueSpeaker;  // 0x0330, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_WorldObject_Dummy_Speaker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RegisterDialogueSpeaker();
    UFUNCTION(BlueprintCallable) void UnregisterDialogueSpeaker();
};
