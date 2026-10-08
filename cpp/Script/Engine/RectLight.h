// /Script/Engine.RectLight
// Derives from: ALight > AActor > UObject
// size 0x238, declared in Engine/Source/Runtime/Engine/Classes/Engine/RectLight.h

UCLASS(MinimalAPI, Config=Engine)
class ARectLight : public ALight
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) URectLightComponent* RectLightComponent;  // 0x0230, size 0x8
};
