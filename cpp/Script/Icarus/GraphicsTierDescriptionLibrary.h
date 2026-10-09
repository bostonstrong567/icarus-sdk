// /Script/Icarus.GraphicsTierDescriptionLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GraphicsTierDescription/GraphicsTierDescriptionLibrary.h

UCLASS()
class UGraphicsTierDescriptionLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToGraphicsTierDescriptionTable(FName Name, FGraphicsTierDescription Data, FGraphicsTierDescriptionRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x59
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGraphicsTierDescriptionEnum(FGraphicsTierDescriptionEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGraphicsTierDescriptionRowHandle CastToGraphicsTierDescriptionRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGraphicsTierDescriptionEnum A, FGraphicsTierDescriptionEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGraphicsTierDescriptionRowHandleFGraphicsTierDescriptionRowHandle(FGraphicsTierDescriptionRowHandle RowHandleA, FGraphicsTierDescriptionRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGraphicsTierDescriptionStruct(FGraphicsTierDescriptionRowHandle RowHandle, FGraphicsTierDescription& GraphicsTierDescription, EValid& Paths);  // parameters 0x51
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGraphicsTierDescriptionEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGraphicsTierDescriptionRowHandle MakeGraphicsTierDescription(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGraphicsTierDescriptionEnum MakeGraphicsTierDescriptionEnum(FGraphicsTierDescriptionEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGraphicsTierDescriptionRowHandle MakeGraphicsTierDescriptionFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGraphicsTierDescriptionRowHandle MakeLiteralGraphicsTierDescription(FGraphicsTierDescriptionRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGraphicsTierDescriptionEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGraphicsTierDescriptionEnum A, FGraphicsTierDescriptionEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGraphicsTierDescriptionEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGraphicsTierDescriptionTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGraphicsTierDescriptionEnum RowHandleToStruct(FGraphicsTierDescriptionRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGraphicsTierDescriptionEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGraphicsTierDescriptionEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGraphicsTierDescriptionRowHandle StructToRowHandle(FGraphicsTierDescriptionEnum EnumValue);  // parameters 0x28
};
