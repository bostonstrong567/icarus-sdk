// /Script/Engine.LevelBounds
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Engine/LevelBounds.h

UCLASS(Config=Engine)
class ALevelBounds : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced) UBoxComponent* BoxComponent;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere) bool bAutoUpdateBounds;  // 0x0228, size 0x1
};
