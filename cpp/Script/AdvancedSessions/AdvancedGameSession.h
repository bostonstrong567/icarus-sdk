// /Script/AdvancedSessions.AdvancedGameSession
// Derives from: AGameSession > AInfo > AActor > UObject
// size 0x288, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AdvancedGameSession.h

UCLASS(NotPlaceable, Config=Game)
class AAdvancedGameSession : public AGameSession
{
public:
    UPROPERTY(Transient) TMap<FUniqueNetIdRepl, FText> BanList;  // 0x0238, size 0x50
};
