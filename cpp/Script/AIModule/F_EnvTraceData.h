// /Script/AIModule.EnvTraceData
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h

USTRUCT()
struct FEnvTraceData
{
public:
    UPROPERTY() int32 VersionNum;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TSubclassOf<UNavigationQueryFilter> NavigationFilter;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) float ProjectDown;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float ProjectUp;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float ExtentX;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) float ExtentY;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) float ExtentZ;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float PostProjectionVerticalOffset;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ETraceTypeQuery> TraceChannel;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionChannel> SerializedChannel;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvTraceShape> TraceShape;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvQueryTrace> TraceMode;  // 0x002B, size 0x1
    UPROPERTY(EditAnywhere) uint8 bTraceComplex : 1;  // 0x002C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOnlyBlockingHits : 1;  // 0x002C, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bCanTraceOnNavMesh : 1;  // 0x002C, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bCanTraceOnGeometry : 1;  // 0x002C, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bCanDisableTrace : 1;  // 0x002C, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bCanProjectDown : 1;  // 0x002C, mask 0x20
};
