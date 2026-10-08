// /Script/Icarus.SettlementTalentControllerComponent
// Derives from: UTalentControllerComponent > UActorComponent > UObject
// size 0x100, declared in Icarus/Source/Icarus/Talents/Controller/SettlementTalentControllerComponent.h

UCLASS(Config=Engine)
class USettlementTalentControllerComponent : public UTalentControllerComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bSettlementTalentControllerSetup;  // 0x00F8, protected
};
