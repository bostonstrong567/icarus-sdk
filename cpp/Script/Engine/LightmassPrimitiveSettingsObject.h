// /Script/Engine.LightmassPrimitiveSettingsObject
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Lightmass/LightmassPrimitiveSettingsObject.h

UCLASS(EditInlineNew, MinimalAPI)
class ULightmassPrimitiveSettingsObject : public UObject
{
public:
    UPROPERTY(EditAnywhere) FLightmassPrimitiveSettings LightmassSettings;  // 0x0028, size 0x18
};
