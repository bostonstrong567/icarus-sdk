// /Script/AIModule.GenericTeamId
// size 0x1, declared in Engine/Source/Runtime/AIModule/Classes/GenericTeamAgentInterface.h

USTRUCT()
struct FGenericTeamId
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 TeamID;  // 0x0000, size 0x1
};
