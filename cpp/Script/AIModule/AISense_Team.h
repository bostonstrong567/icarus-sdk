// /Script/AIModule.AISense_Team
// Derives from: UAISense > UObject
// size 0x90, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Team.h

UCLASS(Config=Engine)
class UAISense_Team : public UAISense
{
public:
    UPROPERTY() TArray<FAITeamStimulusEvent> RegisteredEvents;  // 0x0080, size 0x10
};
