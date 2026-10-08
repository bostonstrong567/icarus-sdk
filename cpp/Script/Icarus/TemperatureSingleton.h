// /Script/Icarus.TemperatureSingleton
// Derives from: UObject
// size 0x38, declared in Icarus/Source/Icarus/Systems/TemperatureSingleton.h

UCLASS()
class UTemperatureSingleton : public UObject
{
public:
    UPROPERTY(EditAnywhere) UCurveFloat* DefaultTempIncCurve;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) UCurveFloat* DefaultTempDecCurve;  // 0x0030, size 0x8
};
