// /Script/Icarus.IcarusNPCMissionCharacter
// Derives from: AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x760, declared in Icarus/Source/Icarus/NPC/Characters/IcarusNPCMissionCharacter.h

UCLASS(Config=Game)
class AIcarusNPCMissionCharacter : public AIcarusCharacter
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FMissionNPCRowHandle NPCData;  // 0x0748, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintPure) USurvivalCharacterState* GetSurvivalCharacterState() const;  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnNPCDataUpdated();
    UFUNCTION() void OnRep_NPCData();
    UFUNCTION(BlueprintCallable) void SetNPCData(FMissionNPCRowHandle NewRow);  // parameters 0x18
};
