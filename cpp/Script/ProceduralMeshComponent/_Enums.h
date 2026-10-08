// /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
UENUM()
enum class EProcMeshSliceCapOption : uint8
{
    NoCap = 0,
    CreateNewSectionForCap = 1,
    UseLastSectionForCap = 2,
};
