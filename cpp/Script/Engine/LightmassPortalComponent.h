// /Script/Engine.LightmassPortalComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x200, declared in Engine/Source/Runtime/Engine/Classes/Components/LightmassPortalComponent.h

UCLASS(MinimalAPI, Config=Engine)
class ULightmassPortalComponent : public USceneComponent
{
public:
    UPROPERTY(Instanced) UBoxComponent* PreviewBox;  // 0x01F8, size 0x8
};
