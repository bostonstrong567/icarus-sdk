// /Script/Icarus.MissionNPCLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/MissionNPC/MissionNPCLibrary.h

UCLASS()
class UMissionNPCLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToMissionNPCTable(FName Name, FMissionNPCData Data, FMissionNPCRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x91
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakMissionNPCEnum(FMissionNPCEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FMissionNPCRowHandle CastToMissionNPCRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FMissionNPCEnum A, FMissionNPCEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FMissionNPCRowHandleFMissionNPCRowHandle(FMissionNPCRowHandle RowHandleA, FMissionNPCRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetMissionNPCStruct(FMissionNPCRowHandle RowHandle, FMissionNPCData& MissionNPC, EValid& Paths);  // parameters 0x89
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMissionNPCEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMissionNPCRowHandle MakeLiteralMissionNPC(FMissionNPCRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMissionNPCRowHandle MakeMissionNPC(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMissionNPCEnum MakeMissionNPCEnum(FMissionNPCEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMissionNPCRowHandle MakeMissionNPCFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMissionNPCEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FMissionNPCEnum A, FMissionNPCEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FMissionNPCEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromMissionNPCTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMissionNPCEnum RowHandleToStruct(FMissionNPCRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FMissionNPCEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FMissionNPCEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMissionNPCRowHandle StructToRowHandle(FMissionNPCEnum EnumValue);  // parameters 0x28
};
