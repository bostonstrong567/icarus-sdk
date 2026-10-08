// /Script/Engine.AtmosphericFog
// Derives from: AInfo > AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Atmosphere/AtmosphericFog.h

UCLASS(MinimalAPI, Config=Engine)
class AAtmosphericFog : public AInfo
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UAtmosphericFogComponent* AtmosphericFogComponent;  // 0x0220, size 0x8
};
