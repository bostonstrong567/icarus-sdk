// /Script/Icarus.IcarusDamageType
// Derives from: UDamageType > UObject
// size 0x48, declared in Icarus/Source/Icarus/Systems/IcarusDamageTypes.h

UCLASS(Const)
class UIcarusDamageType : public UDamageType
{
public:

    // Not reflected: the engine's scripting cannot see these.
    EIcarusDamageType DamageType;  // 0x0040
};
