// /Script/Engine.ParameterGroupData
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Materials/Material.h

USTRUCT()
struct FParameterGroupData
{
public:
    UPROPERTY(EditAnywhere) FString GroupName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) int32 GroupSortPriority;  // 0x0010, size 0x4
};
