// /Script/AugmentedReality.TrackedGeometryGroup
// size 0x18, declared in Engine/Source/Runtime/AugmentedReality/Public/ARActor.h

USTRUCT()
struct FTrackedGeometryGroup
{
    UPROPERTY() AARActor* ARActor;  // 0x0000, size 0x8
    UPROPERTY(Instanced) UARComponent* ARComponent;  // 0x0008, size 0x8
    UPROPERTY() UARTrackedGeometry* TrackedGeometry;  // 0x0010, size 0x8
};
